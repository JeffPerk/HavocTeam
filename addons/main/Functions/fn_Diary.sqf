// not documented: postInit

if (!hasInterface) exitWith {};

player createDiaryRecord ["Diary", ["Long Range Frequencies",
"
<br/><font face='PuristaLight' color='#ffcc00' font size='20' >**LISTENING ON AN UNAUTHORISED FREQUENCY IS STRICTLY PROHIBITED.**</font>
<br/>
<br/>Below is a list of the default Long Range Frequencies. Your role specific frequencies are set on your radio automatically. Ensure you're on the correct frequencies at all times.
<br/>
<br/><font face='PuristaLight' color='#B85450'> Channel: 1 - Frequency:51 Mhz - C2</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 2 - Frequency:52 Mhz - TAC 1 Net</font>
<br/><font face='PuristaLight' color='#00FF00'> Channel: 3 - Frequency:53 Mhz - TAC 2 Net</font>
<br/><font face='PuristaLight' color='#FF0000'> Channel: 4 - Frequency:54 Mhz - TAC 3 Net</font>
<br/><font face='PuristaLight' color='#6C8EBF'> Channel: 5 - Frequency:55 Mhz - TAC 4 Net</font>
<br/><font face='PuristaLight' color='#D3D3D3'> Channel: 6 - Frequency:56 Mhz - CAS - Fires Net</font>
<br/><font face='PuristaLight' color='#D60025'> Channel: 7 - Frequency:57 Mhz - Air Group Net</font> 
<br/><font face='PuristaLight' color='#D79B00'> Channel: 8 - Frequency:58 Mhz - Air 2 Ground Net - Common on all radios/font>
"
]];
 

player createDiaryRecord ["Diary", ["Short Range Frequencies",
"
<br/><font face='PuristaLight' color='#ffcc00' font size='20' >**LISTENING ON AN UNAUTHORISED FREQUENCY IS STRICTLY PROHIBITED.**</font>
<br/>
<br/>Below is a list of the default Short Range Frequencies. Your role specific frequencies are set on your radio automatically. Ensure you're on the correct frequencies at all times. 
<br/>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 1 -- Local Net    - Frequency:501 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 2 -- Red Squadron Net     - Frequency:502 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 3 -- Blue Squadron Net    - Frequency:503 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 4 -- Gold Squadron Net    - Frequency:504 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 5 -- Silver Squadron Net  - Frequency:505 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 6 -- Black Squadron Net   - Frequency:506 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 7 -- Grey Squadron Net    - Frequency:507 Mhz</font>
<br/><font face='PuristaLight' color='#ffcc00'> Channel: 8 -- Air 2 Ground Net     - Frequency:58 Mhz</font>
<br/>

<br/>
"
]];

_PlayerGroup =  group player getVariable ["havoc_section","null"];
if !(_PlayerGroup == "500)") exitwith {};

player createDiarySubject ["HAVOC Commands","HAVOC Commands"];

player createDiaryRecord ["HAVOC Commands", ["TFAR",
"
<br/><font face='PuristaLight' color='#40FFFF' font size='20'>Sending Distance Multiplicator</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>- Used to increase or decrease maximum transmission range of TFAR.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Can be used repeatedly and takes effect immediately. </font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Higher means longer range. A setting of 3.5 covers all of Altis.</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Example:</font>
<br/><execute expression=""copyToClipboard '!tfar_distanceMultiplier 3.5'"">!tfar_distanceMultiplier 3.5</execute>

<br/>



<br/><font face='PuristaLight' color='#40FFFF' font size='20'>Terrain Interception Coefficient</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>- Used to increase or decrease how much Terrain effects Radio Range.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Can be used repeatedly and take effect immediately. </font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Higher means Terrain has a greater impact on reducing radio range.</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Examples:</font>
<br/><execute expression=""copyToClipboard '!tfar_interceptionCoefficient 0.1'"">!tfar_interceptionCoefficient 0.1</execute>

"
]];


player createDiaryRecord ["HAVOC Commands", ["Side Chat",
"
<br/><font face='PuristaLight' color='#40FFFF' font size='20'>Side Chat Duration</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>- Used to set the maximum time in minutes Side Chat can be used for.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- If set to '0' SideChat will remain on permanently.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- As long as side chat hasn't expired, the time can be changed.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Time is from the Server Start time..</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Examples:</font>
<br/><execute expression=""copyToClipboard '!sideChatDuration 60'"">!sideChatDuration 60</execute>
<br/><execute expression=""copyToClipboard '!sideChatDuration 0'"">!sideChatDuration 0</execute>
"
]];

player createDiaryRecord ["HAVOC Commands", ["Safe Zone",
"
<br/><font face='PuristaLight' color='#40FFFF' font size='20'>Safe Zone Enabled</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>- Used to turn the Safe Zone on and off.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Can be used infinitely. </font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Can take a maximum of 60 seconds for the Safe Zone to change state.</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Examples:</font>
<br/><execute expression=""copyToClipboard '!safeZoneEnabled True'"">!safeZoneEnabled True</execute>
<br/><execute expression=""copyToClipboard '!safeZoneEnabled False'"">!safeZoneEnabled False</execute>
<br/>



<br/><font face='PuristaLight' color='#40FFFF' font size='20'>Safe Zone Position</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>- Used to set the center position of the Safe Zone.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Must be in this format x,y </font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Can take a maximum of 60 seconds for the Safe Zone to move.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Hint - If you know where the Safe Zone needs to be moved before mission start, it's much easier to get the x,y in the editor beforehand.</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Example:</font>
<br/><execute expression=""copyToClipboard '!safeZonePosition 1500,2500'"">!safeZonePosition 1500,2500</execute>
<br/>



<br/><font face='PuristaLight' color='#40FFFF' font size='20'>Safe Zone Area</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>- Used to set the size of the Safe Zone in Meters.</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Uses 2D distance from SafeZonePosition</font>
<br/><font face='PuristaLight' color='#6C8EBF'>- Can take a maximum of 60 seconds for the Safe Zone Area to change.</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Example:</font>
<br/><execute expression=""copyToClipboard '!safeZoneArea 250'"">!safeZoneArea 250</execute>
"
]];

player createDiaryRecord ["HAVOC Commands", ["Introduction",
"
<br/><font face='PuristaLight' color='#40FFFF' font size='20'>HAVOC Commands</font>
<br/>
<br/><font face='PuristaLight' color='#6C8EBF'>Welcome to the HAVOC Commands Area. In this Section I'll explain how the system works.

<br/>First off, for these commands to work you need to be set as a mission creator.
<br/>The commands need to be entered to the chat (like admin commands on EU1), they start with an exclamation mark (!).
<br/>The commands can be entered in any chat  Channel, they do not show up in the actual chat, so entered commands are invisible to normal player.
<br/>
<br/>In the following pages of this Section you'll see various commands.
<br/>For each there's examples for you to use.
<br/>Copy the example into the debug console and adjust as required.
<br/>
<br/>As a general rule the server runs a check every 60 seconds for changes to these commands.
<br/>That means from execution of your command till it being action there will be a delay. Ensure you plan for this if required.

"
]];














