/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaEnabledStatus : PBCodable {
    bool  _assistantEnabled;
    bool  _assistantOnLockscreen;
    int  _dataSharingOptInStatus;
    bool  _dictationEnabled;
    bool  _hardwareButtonEnabled;
    bool  _hasHomekitHome;
    bool  _heySiriEnabled;
    bool  _raiseToSpeakEnabled;
    int  _shortcutsAvailable;
    bool  _spokenNotificationsEnabled;
}

@property (nonatomic) bool assistantEnabled;
@property (nonatomic) bool assistantOnLockscreen;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) bool dictationEnabled;
@property (nonatomic) bool hardwareButtonEnabled;
@property (nonatomic) bool hasHomekitHome;
@property (nonatomic) bool heySiriEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool raiseToSpeakEnabled;
@property (nonatomic) int shortcutsAvailable;
@property (nonatomic) bool spokenNotificationsEnabled;

- (bool)assistantEnabled;
- (bool)assistantOnLockscreen;
- (int)dataSharingOptInStatus;
- (bool)dictationEnabled;
- (id)dictionaryRepresentation;
- (bool)hardwareButtonEnabled;
- (bool)hasHomekitHome;
- (unsigned long long)hash;
- (bool)heySiriEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)raiseToSpeakEnabled;
- (bool)readFrom:(id)arg1;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setAssistantOnLockscreen:(bool)arg1;
- (void)setDataSharingOptInStatus:(int)arg1;
- (void)setDictationEnabled:(bool)arg1;
- (void)setHardwareButtonEnabled:(bool)arg1;
- (void)setHasHomekitHome:(bool)arg1;
- (void)setHeySiriEnabled:(bool)arg1;
- (void)setRaiseToSpeakEnabled:(bool)arg1;
- (void)setShortcutsAvailable:(int)arg1;
- (void)setSpokenNotificationsEnabled:(bool)arg1;
- (int)shortcutsAvailable;
- (bool)spokenNotificationsEnabled;
- (void)writeTo:(id)arg1;

@end