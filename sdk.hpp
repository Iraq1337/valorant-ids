class AActor
{
public:
	std::wstring name()
	{
		std::wstring result = _(L"");

		switch ( this->id( ) /* 0x18 */ )
		{
			/* Agents */
		case 14686923:
			result = _( L"NPC" );
			break;
		case 14680938:
			result = _( L"Astra" );
			break;
		case 14667677:
			result = _( L"Breach" );
			break;
		case 14682546:
			result = _( L"Brim" );
			break;
		case 14670076:
			result = _( L"Chamber" );
			break;
		case 14674955:
			result = _( L"Cypher" );
			break;
		case 14665899:
			result = _( L"Fade" );
			break;
		case 14688575:
			result = _( L"Jett" );
			break;
		case 14672652:
			result = _( L"KAY/O" );
			break;
		case 14677521:
			result = _( L"Killjoy" );
			break;
		case 14683214:
			result = _( L"Neon" );
			break;
		case 14687761:
			result = _( L"Omen" );
			break;
		case 14679954:
			result = _( L"Phoenix" );
			break;
		case 14668051:
			result = _( L"Raze" );
			break;
		case 14687149:
			result = _( L"Reyna" );
			break;
		case 14686121:
			result = _( L"Sage" );
			break;
		case 14673746:
			result = _( L"Skye" );
			break;
		case 14676160:
			result = _( L"Sova" );
			break;
		case 14678846:
			result = _( L"Viper" );
			break;
		case 14685050:
			result = _( L"Yoru" );
			break;
		default:
			result = _( L"" );
			break;
		}

		return result;
	};
};

class AAresEquippable
{
public:
	std::wstring name( )
	{
		std::wstring result = _( L"" );

		switch ( this->id( ) /* 0x18 */ )
		{
			/* Weapons */
		case 14860176:
			result = _( L"Knife" );
			break;
		case 14686912:
			result = _( L"Classic" );
			break;
		case 14811161:
			result = _( L"Shorty" );
			break;
		case 14782777:
			result = _( L"Frenzy" );
			break;
		case 14797155:
			result = _( L"Ghost" );
			break;
		case 14803786:
			result = _( L"Sheriff" );
			break;
		case 14849714:
			result = _( L"Stinger" );
			break;
		case 14839966:
			result = _( L"Spectre" );
			break;
		case 14776167:
			result = _( L"Bucky" );
			break;
		case 14770870:
			result = _( L"Judge" );
			break;
		case 14753036:
			result = _( L"Bulldog" );
			break;
		case 14826389:
			result = _( L"Guardian" );
			break;
		case 14758008:
			result = _( L"Phantom" );
			break;
		case 14743198:
			result = _( L"Vandal" );
			break;
		case 14834562:
			result = _( L"Marshal" );
			break;
		case 14814896:
			result = _( L"Operator" );
			break;
		case 14738550:
			result = _( L"Ares" );
			break;
		case 14734141:
			result = _( L"Odin" );
			break;
		case 14705057:
			result = _( L"Spike" );
			break;
		case 14705080:
			result = _( L"Defuser" );
			break;
			/* Astra Abilities */
		case 14682088:
			result = _( L"Astral Form" );
			break;
		case 14681155:
			result = _( L"Gravity Well" );
			break;
		case 14681478:
			result = _( L"Nova Pulse" );
			break;
		case 14681283:
			result = _( L"Nebula" );
			break;
			/* Breach Abilities */
		case 14667546:
			result = _( L"Aftershock" );
			break;
		case 14667806:
			result = _( L"Flashpoint" );
			break;
		case 14667694:
			result = _( L"Fault line" );
			break;
		case 14667909:
			result = _( L"Breach Ult" );
			break;
			/* Brimstone Abilities */
		case 14682824:
			result = _( L"Combat Stim" );
			break;
		case 14682563:
			result = _( L"Molly" );
			break;
		case 14682350:
			result = _( L"Smokes" );
			break;
		case 14682703:
			result = _( L"Brim Ult" );
			break;
			/* Chamber Abilities */
		case 14670190:
			result = _( L"Trademark" );
			break;
		case 14671366:
			result = _( L"Headhunter" );
			break;
		case 14670585:
			result = _( L"Rendezvous" );
			break;
		case 14671668:
			result = _( L"Chamber OP" );
			break;
			/* Cypher Abilities */
		case 14675121:
			result = _( L"Trapwire" );
			break;
		case 14675016:
			result = _( L"Cage" );
			break;
		case 14675501:
			result = _( L"Spycam" );
			break;
			/* Fade Abilities */
		case 14665999:
			result = _( L"Prowler" );
			break;
		case 14666779:
			result = _( L"Seize" );
			break;
		case 14666479:
			result = _( L"Haunt" );
			break;
		case 14667130:
			result = _( L"Nightfall" );
			break;
			/* Jett Abilities */
		case 14688648:
			result = _( L"Cloudburst" );
			break;
		case 14688907:
			result = _( L"Updraft" );
			break;
		case 14688945:
			result = _( L"Knives" );
			break;
			/* Kayo Abilities */
		case 14673116:
			result = _( L"Grenade" );
			break;
		case 14672720:
			result = _( L"Flash" );
			break;
		case 14673086:
			result = _( L"Zeropoint" );
			break;
		case 14673262:
			result = _( L"Kay/o Ult" );
			break;
			/* Killjoy Abilities */
		case 14677677:
			result = _( L"Nanoswarm" );
			break;
		case 14678289:
			result = _( L"Alarmbot" );
			break;
		case 14677868:
			result = _( L"Turret" );
			break;
		case 14678567:
			result = _( L"KJ Ult" );
			break;
			/* Neon Abilities */
		case 14683280:
			result = _( L"Fast lane" );
			break;
		case 14683590:
			result = _( L"Relay Bolt" );
			break;
		case 14683435:
			result = _( L"High Gear" );
			break;
		case 14683923:
			result = _( L"Neon Ult" );
			break;
			/* Omen Abilities */
		case 14687965:
			result = _( L"Teleport" );
			break;
		case 14688494:
			result = _( L"Paranoia" );
			break;
		case 14687975:
			result = _( L"Smoke" );
			break;
		case 14688258:
			result = _( L"Omen Ult" );
			break;
			/* Phoenix Abilities */
		case 14680511:
			result = _( L"Blaze" );
			break;
		case 14680302:
			result = _( L"Curveball" );
			break;
		case 14680253:
			result = _( L"Fireball" );
			break;
			/* Raze Abilities */
		case 14668307:
			result = _( L"Boombot" );
			break;
		case 14668565:
			result = _( L"Blast Pack" );
			break;
		case 14668123:
			result = _( L"Grenade" );
			break;
		case 14668734:
			result = _( L"Raze Ult" );
			break;
			/* Reyna Abilities */
		case 14687026:
			result = _( L"Leer" );
			break;
			/* Sage Abilities */
		case 14686340:
			result = _( L"Barrier Orb" );
			break;
		case 14686185:
			result = _( L"Slow Orb" );
			break;
		case 14686545:
			result = _( L"Healing Orb" );
			break;
		case 14686656:
			result = _( L"Resurrection" );
			break;
			/* Skye Abilities */
		case 14673846:
			result = _( L"Regrowth" );
			break;
		case 14674236:
			result = _( L"Trailblazer" );
			break;
		case 14674184:
			result = _( L"Guiding Light" );
			break;
		case 14674928:
			result = _( L"Seekers" );
			break;
			/* Sova Abilities */
		case 14676765:
			result = _( L"Owl Drone" );
			break;
		case 14676250:
			result = _( L"Shock Bolt" );
			break;
		case 14676890:
			result = _( L"Recon Bolt" );
			break;
		case 14677154:
			result = _( L"Sova Ult" );
			break;
			/* Viper Abilities */
		case 14679466:
			result = _( L"Snake Bite" );
			break;
		case 14679015:
			result = _( L"Poison Cloud" );
			break;
		case 14679226:
			result = _( L"Toxic Screen" );
			break;
		case 14679618:
			result = _( L"Viper Ult" );
			break;
			/* Yoru Abilities */
		case 14685103:
			result = _( L"Fakeout" );
			break;
		case 14685740:
			result = _( L"Blindside" );
			break;
		case 14685383:
			result = _( L"Gatecrash" );
			break;
		case 14685844:
			result = _( L"Yoru Ult" );
			break;
		default:
			result = _( L"" );
			break;
		}

		return result;
	};
};