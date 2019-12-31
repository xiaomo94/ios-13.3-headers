/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSUserAddress : ICSProperty

@property (nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property (nonatomic, retain) NSString *cn;
@property (nonatomic) int cutype;
@property (nonatomic, retain) NSString *dir;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *likenessDataString;
@property (nonatomic) int partstat;
@property (nonatomic, retain) ICSDateValue *partstatModified;
@property (nonatomic) int role;
@property (nonatomic) bool rsvp;
@property (nonatomic) int scheduleagent;
@property (nonatomic) int scheduleforcesend;
@property (nonatomic) int schedulestatus;
@property (nonatomic, retain) NSString *x_apple_inviterName;
@property (nonatomic) bool x_apple_self_invited;
@property (nonatomic, retain) NSString *x_apple_telephone;

+ (id)ICSStringFromCalendarUser:(int)arg1;
+ (id)ICSStringFromParticipationStatus:(int)arg1;
+ (id)ICSStringFromRole:(int)arg1;
+ (id)ICSStringFromScheduleAgent:(int)arg1;
+ (id)ICSStringFromScheduleForceSend:(int)arg1;
+ (id)ICSStringFromScheduleStatus:(int)arg1;
+ (id)URLForNoMail;
+ (int)calendarUserFromICSString:(id)arg1;
+ (int)participationStatusFromICSString:(id)arg1;
+ (int)roleFromICSString:(id)arg1;
+ (int)scheduleAgentFromICSString:(id)arg1;
+ (int)scheduleForceSendFromICSString:(id)arg1;
+ (int)scheduleStatusFromICSString:(id)arg1;

- (id)alternateTimeProposal;
- (id)cn;
- (int)cutype;
- (id)dir;
- (id)displayName;
- (id)email;
- (id)emailAddress;
- (void)fixAddress;
- (bool)hasEmailAddress;
- (bool)hasPhoneNumber;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEmailAddress;
- (bool)isHTTPAddress;
- (bool)isHTTPSAddress;
- (bool)isPhoneNumber;
- (id)likenessDataString;
- (id)parametersToObscure;
- (int)partstat;
- (id)partstatModified;
- (id)phoneNumber;
- (id)propertiesToObscure;
- (int)role;
- (bool)rsvp;
- (id)sanitizeAddressString:(id)arg1;
- (int)scheduleagent;
- (int)scheduleforcesend;
- (int)schedulestatus;
- (void)setAlternateTimeProposal:(id)arg1;
- (void)setCn:(id)arg1;
- (void)setCutype:(int)arg1;
- (void)setDir:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setLikenessDataString:(id)arg1;
- (void)setPartstat:(int)arg1;
- (void)setPartstatModified:(id)arg1;
- (void)setRole:(int)arg1;
- (void)setRsvp:(bool)arg1;
- (void)setScheduleagent:(int)arg1;
- (void)setScheduleforcesend:(int)arg1;
- (void)setSchedulestatus:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setX_apple_inviterName:(id)arg1;
- (void)setX_apple_self_invited:(bool)arg1;
- (void)setX_apple_telephone:(id)arg1;
- (void)setX_calendarserver_email:(id)arg1;
- (bool)shouldObscureValue;
- (id)x_apple_inviterName;
- (bool)x_apple_self_invited;
- (id)x_apple_telephone;
- (id)x_calendarserver_email;

@end
