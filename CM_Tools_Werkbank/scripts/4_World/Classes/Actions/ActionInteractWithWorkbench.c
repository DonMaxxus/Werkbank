class ActionInteractWithWorkbench : ActionInteractBase
{
	void ActionInteractWithWorkbench()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_HUDCursorIcon = CursorIcons.CloseHood;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	

	override string GetText()
	{
		return "Open Workbench";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (GetGame().IsClient())
		{
			CM_Tools_Werkbank ntarget = CM_Tools_Werkbank.Cast(  target.GetObject() );
			if(  ntarget )
			{
				return true;
			}
			return false;
		}
		return true;
	}
	
	override void OnExecuteClient( ActionData action_data )
	{
		CM_Tools_Werkbank ntarget = CM_Tools_Werkbank.Cast( action_data.m_Target.GetObject() );
		string message;
		if ( ntarget)
		{
			g_CraftManager.SetWorkbench(ntarget);
			g_CraftManager.RequestCraft();
		}
	}	
}