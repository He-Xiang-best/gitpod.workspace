import core.Login;

public class ChatClient
{

    public ChatClient() {}

    public static void main(String args[])
    {
        // 默认设置3人上线
        for (int i = 1;i<=3;i++)
            new Login();

    }
}
