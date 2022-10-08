class AActor
{
public:
std::wstring name()
	{
		std::wstring result = _(L"");

		if ( !this ) return result;

		switch ( this->id( ) /* 0x18 */ )
		{
			/* Agents */
		case 14743142:
			result = _( L"NPC" );
			break;
		case 14737751:
			result = _( L"Astra" );
			break;
		case 14724020:
			result = _( L"Breach" );
			break;
		case 14738750:
			result = _( L"Brim" );
			break;
		case 14726670:
			result = _( L"Chamber" );
			break;
		case 14731249:
			result = _( L"Cypher" );
			break;
		case 14722646:
			result = _( L"Fade" );
			break;
		case 14744794:
			result = _( L"Jett" );
			break;
		case 14729239:
			result = _( L"KAY/O" );
			break;
		case 14734075:
			result = _( L"Killjoy" );
			break;
		case 14739416:
			result = _( L"Neon" );
			break;
		case 14744160:
			result = _( L"Omen" );
			break;
		case 14736272:
			result = _( L"Phoenix" );
			break;
		case 14724278:
			result = _( L"Raze" );
			break;
		case 14743237:
			result = _( L"Reyna" );
			break;
		case 14742340:
			result = _( L"Sage" );
			break;
		case 14730205:
			result = _( L"Skye" );
			break;
		case 14732482:
			result = _( L"Sova" );
			break;
		case 14735674:
			result = _( L"Viper" );
			break;
		case 14741309:
			result = _( L"Yoru" );
			break;
		default:
			result = _( L"" );
			break;
		}

		return result;
	}
};

class AAresEquippable
{
public:
	std::wstring name( )
	{
		std::wstring result = _( L"" );

		if ( !this ) return result;


		switch ( this->id( ) )
		{
			/* Weapons */
		case 14918625:
			result = _( L"Knife" );
			break;
		case 14743123:
			result = _( L"Classic" ); // range 
			break;
		case 14743131:
			result = _( L"Classic" );
			break;
		case 14868983:
			result = _( L"Shorty" );
			break;
		case 14840062:
			result = _( L"Frenzy" );
			break;
		case 14854636:
			result = _( L"Ghost" );
			break;
		case 14861746:
			result = _( L"Sheriff" );
			break;
		case 14908949:
			result = _( L"Stinger" );
			break;
		case 14898423:
			result = _( L"Spectre" );
			break;
		case 14833362:
			result = _( L"Bucky" );
			break;
		case 14827765:
			result = _( L"Judge" );
			break;
		case 14809750:
			result = _( L"Bulldog" );
			break;
		case 14884426:
			result = _( L"Guardian" );
			break;
		case 14814813:
			result = _( L"Phantom" );
			break;
		case 14799696:
			result = _( L"Vandal" );
			break;
		case 14892692:
			result = _( L"Marshal" );
			break;
		case 14872802:
			result = _( L"Operator" );
			break;
		case 14794964:
			result = _( L"Ares" );
			break;
		case 14790466:
			result = _( L"Odin" );
			break;
		case 14761269:
			result = _( L"Spike" );
			break;
		case 14761292:
			result = _( L"Defuser" );
			break;
			/* Astra Abilities */
		case 14738277:
			result = _( L"Astral Form" );
			break;
		case 14737367:
			result = _( L"Gravity Well" );
			break;
		case 14737675:
			result = _( L"Nova Pulse" );
			break;
		case 14737478:
			result = _( L"Nebula" );
			break;
			/* Breach Abilities */
		case 14723773:
			result = _( L"Aftershock" );
			break;
		case 14724258:
			result = _( L"Flashpoint" );
			break;
		case 14724025:
			result = _( L"Fault line" );
			break;
		case 14724116:
			result = _( L"Breach Ult" );
			break;
			/* Brimstone Abilities */
		case 14739113:
			result = _( L"Combat Stim" );
			break;
		case 14738782:
			result = _( L"Molly" );
			break;
		case 14738754:
			result = _( L"Smokes" );
			break;
		case 14738922:
			result = _( L"Brim Ult" );
			break;
			/* Chamber Abilities */
		case 14726675:
			result = _( L"Trademark" );
			break;
		case 14727288:
			result = _( L"Headhunter" );
			break;
		case 14727118:
			result = _( L"Rendezvous" );
			break;
		case 14727744:
			result = _( L"Chamber OP" );
			break;
			/* Cypher Abilities */
		case 14731934:
			result = _( L"Trapwire" );
			break;
		case 14731373:
			result = _( L"Cage" );
			break;
		case 14731943:
			result = _( L"Spycam" );
			break;
			/* Fade Abilities */
		case 14722652:
			result = _( L"Prowler" );
			break;
		case 14722976:
			result = _( L"Seize" );
			break;
		case 14723366:
			result = _( L"Haunt" );
			break;
		case 14723326:
			result = _( L"Nightfall" );
			break;
			/* Jett Abilities */
		case 14744867:
			result = _( L"Cloudburst" ); //here
			break;
		case 14745116:
			result = _( L"Updraft" );
			break;
		case 14745154:
			result = _( L"Knives" );
			break;
			/* Kayo Abilities */
		case 14729495:
			result = _( L"Grenade" );
			break;
		case 14729244:
			result = _( L"Flash" );
			break;
		case 14729294:
			result = _( L"Zeropoint" );
			break;
		case 14729517:
			result = _( L"Kay/o Ult" );
			break;
			/* Killjoy Abilities */
		case 14734080:
			result = _( L"Nanoswarm" );
			break;
		case 14734599:
			result = _( L"Alarmbot" );
			break;
		case 14734550:
			result = _( L"Turret" );
			break;
		case 14735016:
			result = _( L"KJ Ult" );
			break;
			/* Neon Abilities */
		case 14739553:
			result = _( L"Fast lane" );
			break;
		case 14739798:
			result = _( L"Relay Bolt" );
			break;
		case 14740066:
			result = _( L"High Gear" );
			break;
		case 14740142:
			result = _( L"Neon Ult" );
			break;
			/* Omen Abilities */
		case 14744205:
			result = _( L"Teleport" );
			break;
		case 14744676:
			result = _( L"Paranoia" );
			break;
		case 14744027:
			result = _( L"Smoke" );
			break;
		case 14744453:
			result = _( L"Omen Ult" );
			break;
			/* Phoenix Abilities */
		case 14736906:
			result = _( L"Blaze" );
			break;
		case 14736894:
			result = _( L"Curveball" );
			break;
		case 14736477:
			result = _( L"Fireball" );
			break;
			/* Raze Abilities */
		case 14724524:
			result = _( L"Boombot" );
			break;
		case 14725044:
			result = _( L"Blast Pack" );
			break;
		case 14724660:
			result = _( L"Grenade" );
			break;
		case 14724953:
			result = _( L"Raze Ult" );
			break;
			/* Reyna Abilities */
		case 14743821:
			result = _( L"Leer" );
			break;
			/* Sage Abilities */
		case 14742876:
			result = _( L"Barrier Orb" );
			break;
		case 14742404:
			result = _( L"Slow Orb" );
			break;
		case 14742886:
			result = _( L"Healing Orb" );
			break;
		case 14742897:
			result = _( L"Resurrection" );
			break;
			/* Skye Abilities */
		case 14730209:
			result = _( L"Regrowth" );
			break;
		case 14730842:
			result = _( L"Trailblazer" );
			break;
		case 14730216:
			result = _( L"Guiding Light" );
			break;
		case 14730938:
			result = _( L"Seekers" );
			break;
			/* Sova Abilities */
		case 14733072:
			result = _( L"Owl Drone" );
			break;
		case 14732551:
			result = _( L"Shock Bolt" );
			break;
		case 14733291:
			result = _( L"Recon Bolt" );
			break;
		case 14733377:
			result = _( L"Sova Ult" );
			break;
			/* Viper Abilities */
		case 14736134:
			result = _( L"Snake Bite" );
			break;
		case 14735679:
			result = _( L"Poison Cloud" );
			break;
		case 14735689:
			result = _( L"Toxic Screen" );
			break;
		case 14735841:
			result = _( L"Viper Ult" );
			break;
			/* Yoru Abilities */
		case 14741908:
			result = _( L"Fakeout" );
			break;
		case 14742053:
			result = _( L"Blindside" );
			break;
		case 14741916:
			result = _( L"Gatecrash" );
			break;
		case 14742043:
			result = _( L"Yoru Ult" );
			break;
		default:
			result = _( L"" );
			break;
		}

		return result;
	}
};
