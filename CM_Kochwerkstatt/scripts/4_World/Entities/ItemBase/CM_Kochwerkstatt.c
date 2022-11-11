class CM_Kochwerkstatt : ItemBase
{
    void SetActions()
	{
		super.SetActions();

        AddAction(ActionInteractWithWorkbench);
		AddAction(ActionDeconstructWB);
	}

    override bool CanPutInCargo (EntityAI parent)
	{
		return false;
	}

    override bool CanPutIntoHands (EntityAI parent)
	{	
		return false;
	}
}