class CraftManager
{

    ref CraftHud        m_CraftHud;
    ref array<EntityAI> m_AllItems;
    CM_Kochwerkstatt m_Workbench;
    ref map<string,int> m_ExItems;

    void CraftManager()
    {
        m_ExItems = new map<string, int>();
        m_AllItems = new array<EntityAI>();
    }

    void SetWorkbench(CM_Kochwerkstatt wb)
    {
        m_Workbench = wb;
    }

    CM_Kochwerkstatt GetWB()
    {
        return m_Workbench;
    }

    void OnKeyPress( int key )
    {
        switch (key)
        {
            case KeyCode.KC_ESCAPE:
                CloseCraft();
            break;
        }
    }

    void RequestCraft()
    {
        if (m_CraftHud || GetGame().GetUIManager().GetMenu()) return;
        
        m_CraftHud = new CraftHud();
        GetGame().GetUIManager().ShowScriptedMenu( m_CraftHud, NULL );
    }

    void CloseCraft()
    {
        if ( GetGame().GetUIManager().GetMenu() && m_CraftHud)
        {
            GetGame().GetUIManager().Back();
            GetWB().RPCSingleParam(kochwerkstatt.CLIENT_REQUEST_FREE_WB, new Param1<CM_Kochwerkstatt>(GetWB()), true, null);
            SetWorkbench(null);
        }
    }


    static void SelfChatMessage( string message )
	{ 
        GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(0, "", message, "")); 
    }

    void DeleteEntities()
    {
        for (int i = 0; i < m_AllItems.Count(); i++)
        {
            if (m_AllItems.Get(i))
            GetGame().ObjectDeleteOnClient(m_AllItems.Get(i));
        }
        m_AllItems.Clear();
    }

}
ref CraftManager g_CraftManager;