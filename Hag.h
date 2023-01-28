class staff
with 
react_before[;
smell: if (second ==  self) "Really? First, do you really want to? Second, do you figure they want you to? Maybe you need to be more concerned about your own hygiene first.";
rfalse;
listen: if (noun == self) "Yeah, you hear that they're talking, but are you listening? Maybe focus on your social skills before trying to pretend to pay attention. You're not convincing anyone.";
rfalse;
],
has ;

staff hag "Janine" limbo
with name 'lady' 'hag' 'Janine',
description
[;
if (self has BeenChecked) "You carefully look at the old lady again. Mostly because there is a strong compulsion in you to be grossed out. You're sure you've never seen anything like her. But you don't judge.^ 
As her one eye wobbles and tobbacco stained lips pucker and thins, your fascination reaches an all time high. You just can't help it. Reluctantly, you tear your gaze from her watery eyeball and glance at the badge pinned to her poison green knit cardigan. It still says: Security - TW Inc. This time she glares at you. It might be a good idea to steer clear of her. If you can.";
else
give self BeenChecked; "Polyester trousers, green cardigan - likely home made. It's hard to look at the one-eyed old woman for too long. She smirks and scratches her scalp with long yellowing fingernails. The sound makes your skin crawl. In one hand she's clutching a tablet of unknown brand and in the other a yellow bic pen which she twirls around and around her gnarly fingers as she stares at you.^
See this? She hisses and taps a glossy badge attached to her cardigan. ^
Your brain goes blank for a moment as you read what it says, ^
Security - TW Inc. ^
Below the security badge sit a second badge. In bright colour it cheerily informs you:^
~My name is Jeanine. How can I help you today?~
After a long moment she steps back and sits on a stool that's placed to the side of the office door. She starts poking at her tablet while pretending not to glare at you.";
],
initial [;
if (hag hasnt BeenChecked)
"The old hag glares at you. Suppose you should talk to her, or something."; 
if (hag has Danger)
"There's a sudden ringing in your ear. Grimacing, you notice the stool at the office door is empty. Empty?";
"Janine taps her badge without taking her eye from the tablet screen."; ],
before[;
talk:
"The hag glares at you. Chitchat is not her thing. But you can ask her about stuf. Or maybe give or show her something.";   ],
each_turn
[;
if (random(5) == 1) 
{
switch (random(5)) 
{
1: 
if (parent(self) == stool)"The old hag scowls at her tablet, mumbling.";
"The old hag rummages through a random pile of junk, seemingly awfully busy, while every so often throwing a suspicious glance at you.";
2:
if (parent(self) ==stool)"The old hag sits on her stool, pretending to not stare at you.";
"The old hag paces. She walks between you and the office door, stops, turns and returns to her stool, walks around it and pauses, whacking a coil of XLR cable against her polyester clad scrawny thigh.";
3: 
if (parent(self) ==stool)"Your asscrak itches. You will not scratch.";
"Serupticiously, you scratch your ass, hoping the old hag doesn't notice.";
4: 
"Breathe. Remember to breathe.";
5: 
"Frackl sizzle pop goes the old radio.";
}
"The hag is tunelessly humming a dirty tune, she does. You just know."; 
}
],
life[; 
Answer: 
"the old hag shakes her head and shrugs. She really couldn't care less.";
Ask: 
switch (second)
{
'choice':
if (Outside hasnt visited) "Janine looks surprised. ~Choice, ~ she says, ~As far as I know you didn't make any. Yet.~ She throws a quick glance  at something behind you but soon ignores you,  busy poking her tablet again.";
"Janine looks at you with a tiny smirk playing on her lips. ~Well, I don't know what you were doing out there, Kid. But something compelled you to come back in.~ She glances at the entrance door and picks at a loose bit of yarn on her cardigan as she thinks for a moment.  She looks back at you, twirling her pen. ~Some choices  aren't really choices man. But you make them anyways. I'm sure you have your reasons. Everyone entering this place does.~^
She turns the tablet face down in her lap and seem to contemplate your T-Shirt as she continues. ~It's up to you, Kid, if you think you can look this latest choice in the face. And own it.~
Janine finally looks away, leaving you to your own uncomfortable thoughts.";
'tablet', 'yellow':
"Janine's eye widens and the tablet is instantly facing down in her lap. ~What tablet?~^
You look at it, clearly visible beneath her protective fingers. But one more look at the old woman's expression makes you take half a step back. You shrug. ~Oh, nothing. I was just...~  Your voice trails off and you make yourself busy picking at your nails, looking at anything but Janine.^
After a moment, Janine seems to relax a bit and is soon back poking at her tablet."; 
'janine', 'hag', 'woman', 'her', 'lady':
"The woman slowly blinks  and looks at you, considering. In the end she shakes her head and taps a small badge attached to her chest. She waves you off and returns to her tablet.";
'plaque', 'sign', 'message', 'postit', 'office':
"She puckers her lips and rolls her eye while focusing on her tablet. After a moment she looks up and shrugs. She really doesn't seem to know.";
'radio', 'transistor', 'transistor radio', 'antenna', 'cable roll':
"She shrugs. ~Was here when I started. never touched it.~";
'gear', 'workplace', 'job', 'money', 'work', 'boss', 'duty':
"~You'll know soon enough, kid.~, she says, ~If you don't fuck it up first. You're not the only one she's brought out here the last few months~. She scrapes at her scalp and jabs her thumb at the door behind her. ~never seen anyone come out of there, ya kno, smiling. If you see what I mean~. She smirks and looks you up and down. She shakes her head and starts exploring her nostrils until you have to look away.";
'website', 'online', ' information', 'business', 'company', 'technowitch':
if (BusinessCard has BeenSeen)
"~Gave you a card already, didn't I?~ the hag glares at you. ~That's all you need, Kid.~";
move BusinessCard to player; "The old hag rummages in a pocket and produces a business card. You gingerly take it and put it in your pocket. you can check it later.";
'me', 'player', 'game', 'gameplay', 'zcode', 'inform', 'frotz':
"The old woman snorts and gives you a careful onceover. She sighs and says, ~How the hell would I know?~";
'lunch', 'food', 'burgers', 'roach', 'ketchup', 'collection', 'junk', 'electronics', 'legwarmers', 'vcr', 'computer':
if (lunch in location)
"Jeanine grins, abandons her tablet jabbing for a moment to look at you. Her wandering eyeball moves up and down your body, pausing in places where such scrutiny should never be allowed to happen.   As a final insult, her eyebrows shoots up  in question. ~Hungry?~ she asks hopefully. ~Its' free, Kid. You'll never get an offer like that anywhere else.~";
move lunch to warehouse;
"She stops poking at her tablet and looks at the heaps of junk filling the warehouse. She leans a little bit closer to you. She tells you quietly while slowly perusing the collection , ~She calls it 'Good junk~. ^
The one-eyed hag gives you a look with a meaning. What that meaning is, you can't say. But you nod slowly and meaningfully to let your know the meaning is clear.  She nots, apparently satisfied. Then she points at one heap a little bit to the side of all the other unremarkable heaps of crap. ~See that?~ She says and waits for you to akknowledge the heap as a different and specific heap with a nod.^
~Lunch,~ she says with a grin. ^
Looking closer at the heap that is apparently other, it is clear that it is less a heap than a table with a heap piled on top. ^
There's a  pile of menus for various food delivery companies with a side of torn up fast food wrappers and crushed styrofoam boxes. Used napkins and unused plastic straws and half finished milkshakes tops off the tableau.^
~Free. Just phone and get what you want,~ Jeanine says, ~Use your own phone. You do have one of those, right?~.^
As you think about how to answer that, Something very black, shiny, and ultilegged struggles through the hole in one of the vanilla shakes. The roach drops down on the table with a fat plop and scurries across the menus and disappears under  a pile of what can only be empty ketchup packets. The pile shudders and heaves before it settles.^
Jeanine abruptly jerks her pointy finger back an jabs at her tablet with renewed vigour. A satisfied smile shapes her lips just so.^
You shudder and decide to bring your own lunch.";
}
Tell: 
"hag pointedly turns to her tablet and jabs at it. She couldn't care less.";
Attack:
print "Oh yeah? That's your desperate move is it? ^
There is still time to change your mind. And what happens at TechnoWitch house stays with TechnoWitch to her own eternal amusement. But I must ask again; Are you  sure?";
if (YesOrNo());
deadflag = 1;
!Note. So here's to be a scene out of some horror movie. A cut scene of the player looking over the pile of junk, finding somethig suitable. Something sharp and deadly if used right. 
!Alternatively, if the player has the crowbar, that can be used.
!I think I want the player to choose the murder weapon and there are a couple of alternatives. Get suggestions from Scott Perhaps something poisonous that could be sprinkled on a danish pastry., 
!Office phone, Crowbar, Brian's bebe gun, plastic bottle, although that's hard work. Something sharp from the junk pile. Bottle of hairspray. 
print "Scene, the Killing, or attempted murder of Janine.";

deadflag = 3;
!Section The kissing of Janine

Kiss:
!deadflag = 1;
print "Excuse me?  Is that really what you want to do right now? I mean, it's been rather lonely around the flat since your room matetook off. But really? ";
if (YesOrNo()) 
print "Again, this is rather awkward man. You still have one chance to back out of this. All you have to do is say no and all will be forgotten. We will not mention this ever again. Now, are you sure?";
if (YesOrNo());

<<jump>>;
Throwat: move noun to location; <<Attack self>>;
!A bit abundant as the game is over after attack, but I'll add something more interesting here later.
Show, Give:
if (noun ~= letter)
"Not interested, the hag waves you off.";
else
if (letter has BeenChecked)
"~Seen it. Don't need to see it again. Already done seeing that,~ she grumbles without looking at you. Since the letter already opened the door for you, there's no need to show it again. It's probably best to put it away before you make her change her mind. ^
However, she does look seruptitiously at the letter as you put it back in your pocket. If that's hostility or terror you see in that quick glance is hard to know."; 
else
give letter BeenChecked; move hag to stool; "The old hag considers you for a moment. She pulls something crunchy out of a nostril and flicks it before snatching the letter from you. She takes her time, following each line while mumbling words. ^
What those wereds are is impossible to say because clearly they didn't come from the letter, which the woman is holding up-side-down. ^
She nots and puckers her lips before shoving the paper back in your hand. ^
~Yup. It's all there,~ she says and nods again. ~Looks right to me.~ ^
The hag makes herself comfortable on her stool an without looking at you again, she points at the door, grunts, and starts stabbing her tablet wit enthusiasm. You put the letter back in your pocket and try to collect your thoughts. You guess it's on.";
!}
],
has animate female proper;
