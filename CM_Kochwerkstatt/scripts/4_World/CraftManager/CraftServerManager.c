class CraftServerManager
{
    const private static string m_ProfilePath		= "$profile:";
	const private static string m_FolderName		= "CM_Kochwerkstatt";
	const private static string m_FileName			= "Kochwerkstatt_Settings";

    ref CraftClasses m_CraftClasses;

    void CraftServerManager()
    {
        m_CraftClasses = new CraftClasses();
    }


    static CraftServerManager LoadData()
    {   
        CraftServerManager traderData = new CraftServerManager();
        JsonFileLoader<CraftServerManager>.JsonLoadFile(m_ProfilePath + m_FolderName + "/" + m_FileName + ".json", traderData);
        return traderData;
    }

    void SendTraderData(PlayerBase player)
    {
        player.RPCSingleParam(kochwerkstatt.SERVER_SEND_MAIN_DATA, new Param1<ref CraftClasses>(m_CraftClasses), true, player.GetIdentity());
    }
}

ref CraftServerManager g_CraftServerManager;
