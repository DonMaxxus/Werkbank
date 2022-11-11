class ActionDeconstructWB: ActionInteractBase
{
	void ActionDeconstructWB()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_HUDCursorIcon = CursorIcons.CloseHood;
	}

	override string GetText()
	{
		return "Deconstruct";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (GetGame().IsClient())
		{
			CM_Kochwerkstatt wb = CM_Kochwerkstatt.Cast(target.GetObject());
			if ( wb /*&& (player.m_CraftClasses.WorkbenchesClassnames.Find(wb.GetType()) + 1)*/ )
			{
				int attCount = wb.GetInventory().AttachmentCount();
				if (wb.HasAnyCargo() || (attCount!=0))
				{
					return false;
				}
				return true;
			}
			return false;
		}
		return true;
	}

	override void OnExecuteServer( ActionData action_data )
	{
		CM_Kochwerkstatt wb = CM_Kochwerkstatt.Cast(action_data.m_Target.GetObject());
		if (wb)
		{
			GetGame().CreateObject("CM_Kochwerkstatt_Kit", action_data.m_Player.GetPosition(), false);
			GetGame().ObjectDelete(wb);
		}
	}
}

modded class ActionDeployObject: ActionContinuousBase
{    
	override void OnFinishProgressServer( ActionData action_data )
    {
		super.OnFinishProgressServer(action_data);
        if (action_data.m_MainItem.IsKindOf("CM_Kochwerkstatt_Kit"))
        {
			GetGame().ObjectDelete(action_data.m_MainItem);
		}
	}
    void SetupAnimation( ItemBase item )
    {
        if ( item.IsDeployable() )
        {
            if ( item.IsHeavyBehaviour() )
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DEPLOY_HEAVY;
            }
            else if ( item.IsOneHandedBehaviour() )
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DEPLOY_1HD; 
            }
            else if ( item.IsTwoHandedBehaviour() )
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DEPLOY_2HD;
            }
            else
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DEPLOY_1HD; 
            }
        }
        else
        {
            if ( item.IsHeavyBehaviour() )
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_PLACING_HEAVY;
            }
            else if ( item.IsOneHandedBehaviour() )
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_PLACING_1HD; 
            }
            else if ( item.IsTwoHandedBehaviour() )
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_PLACING_2HD;
            }
            else
            {
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DEPLOY_1HD; 
            }
        }
    }
};