/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDetectedAttributeDissector : SGPipelineDissector {
    SGContactPipelineHelper * _contactsHelper;
    NSSet * _ddTrustedLanguages;
    bool  _filterWithAddressBook;
    SGHKHealthStore * _healthStore;
    NSSet * _hmmTrustedLanguages;
    SGDetectedAttributeML * _ml;
    SGQuickResponsesML * _mlQR;
    unsigned long long  _selfIdentificationMessageCount;
    float  _unlikelyPhoneSamplingRate;
}

@property (nonatomic) unsigned long long selfIdentificationMessageCount;

+ (void)clearConversationCache;
+ (id)currentPatterns;
+ (id)dissectorWithMockedMLTrainingForTests;
+ (bool)isAddressContext:(id)arg1;
+ (bool)isBirthdayContext:(id)arg1;
+ (bool)isMaybeNameContext:(id)arg1;
+ (bool)isNameRequest:(id)arg1;
+ (bool)isPhoneContext:(id)arg1;
+ (bool)isTwoPersonConversation:(id)arg1;
+ (id)patterns;

- (void).cxx_destruct;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 onEntity:(id)arg2 withSupervisionToFill:(id)arg3 isUnlikelyPhone:(bool)arg4;
- (id)detectionFromSignatureDDMatch:(id)arg1 onEntity:(id)arg2 detectedLabelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 lastClaimedLabelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 isUnlikelyPhone:(bool)arg5;
- (void)dissectForContacts:(id)arg1 inContext:(id)arg2 withConversationHistory:(id)arg3;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)filterDangerousSigAddressDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigEmailDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigPhoneDetections:(id)arg1 onEntity:(id)arg2;
- (id)getLineContaining:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2;
- (void)handleTextMessageBirthdayCongratulation:(id)arg1 withConversationHistory:(id)arg2;
- (void)handleTextMessageSelfIdentification:(id)arg1 withConversationHistory:(id)arg2;
- (id)init;
- (id)initWithML:(id)arg1 withMLQR:(id)arg2 andHealthStore:(id)arg3;
- (void)logBirthdayExtractionMetricForPerson:(id)arg1 forDate:(id)arg2 isFromCongratulation:(unsigned char)arg3 withModelVersion:(id)arg4 didRegexTrigger:(unsigned char)arg5;
- (id)processTextMessageConversation:(id)arg1 threadLength:(unsigned long long)arg2;
- (unsigned long long)selfIdentificationMessageCount;
- (void)setSelfIdentificationMessageCount:(unsigned long long)arg1;

@end
