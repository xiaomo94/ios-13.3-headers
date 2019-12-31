/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPipelineEntity : SGEntity {
    NSArray * _authorMatchingContacts;
    NSSet * _authorMatchingContactsKeys;
    bool  _contactInformationExtracted;
    NSData * _contentHash;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * _dataDetectorsSignature;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _dissectorLock;
    NSMutableDictionary * _emailToCanonicalEmailCache;
    NSMutableArray * _enrichments;
    NSMutableArray * _externalEnrichments;
    bool  _fullDownloadRequested;
    unsigned long long * _htmlOffsets;
    struct { 
        struct { 
            unsigned short bom; 
            unsigned short tag; 
        } _featureType; 
        bool hasInhumanHeaders; 
        bool inhumanEmailAddress; 
        bool inhumanAuthorName; 
        bool inhumanBody; 
        bool isTemplate; 
    }  _inhumanFeatures;
    NSArray * _instantMessageAddresses;
    INInteraction * _interaction;
    NSArray * _invalidatedMessageIdentifiers;
    SGMessage * _message;
    bool  _pendingGeocode;
    NSString * _plainTextContentCache;
    bool  _plainTextContentCacheGenerated;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _plainTextContentCacheLock;
    NSArray * _plainTextDetectedData;
    NSArray * _plainTextLines;
    NSIndexSet * _plainTextQuotedRegions;
    NSIndexSet * _plainTextSigHtmlBlockRegions;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _plainTextSigRange;
    NSIndexSet * _plainTextTabularRegions;
    NSMutableArray * _taggedCharacterRanges;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) NSString *authorEmail;
@property (nonatomic, retain) NSArray *authorMatchingContacts;
@property (nonatomic, retain) NSSet *authorMatchingContactsKeys;
@property (nonatomic) bool contactInformationExtracted;
@property (nonatomic, retain) NSData *contentHash;
@property (nonatomic) struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*dataDetectorsSignature;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSMutableDictionary *emailToCanonicalEmailCache;
@property (nonatomic, retain) NSArray *enrichments;
@property (nonatomic, retain) NSArray *externalEnrichments;
@property (getter=hasFullDownloadBeenRequested, readonly) bool fullDownloadRequested;
@property (nonatomic, readonly) unsigned long long*htmlOffsets;
@property (nonatomic, readonly) struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; }*inhumanFeatures;
@property (nonatomic, readonly) NSArray *instantMessageAddresses;
@property (nonatomic, readonly) INInteraction *interaction;
@property (retain) NSArray *invalidatedMessageIdentifiers;
@property (nonatomic, readonly) SGMessage *message;
@property (nonatomic) bool pendingGeocode;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSString *plainTextContent;
@property (nonatomic, retain) NSArray *plainTextDetectedData;
@property (nonatomic, readonly) NSArray *plainTextLines;
@property (nonatomic, retain) NSIndexSet *plainTextQuotedRegions;
@property (nonatomic, retain) NSIndexSet *plainTextSigHtmlBlockRegions;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } plainTextSigRange;
@property (nonatomic, retain) NSIndexSet *plainTextTabularRegions;
@property (nonatomic, retain) NSArray *taggedCharacterRanges;

+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)birthday:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)fromCloudKitRecord:(id)arg1;
+ (id)instantMessageAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)socialProfile:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;

- (void).cxx_destruct;
- (void)acquireDissectorLock;
- (void)addBirthdayEnrichment:(id)arg1;
- (void)addCuratedBirthday:(id)arg1;
- (void)addCuratedEmailAddress:(id)arg1;
- (void)addCuratedPhoneNumber:(id)arg1;
- (void)addCuratedPostalAddress:(id)arg1;
- (void)addDetectedBirthday:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionInfo:(id)arg5;
- (void)addDetectedEmailAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionInfo:(id)arg5;
- (void)addDetectedInstantMessageAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionInfo:(id)arg5;
- (void)addDetectedPhoneNumber:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionInfo:(id)arg5;
- (void)addDetectedPostalAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionInfo:(id)arg5;
- (void)addDetectedSocialProfile:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionInfo:(id)arg5;
- (void)addDetection:(id)arg1 forIdentity:(id)arg2 extractionInfo:(id)arg3;
- (void)addEmailAddressEnrichment:(id)arg1;
- (void)addEnrichment:(id)arg1;
- (void)addExternalEnrichment:(id)arg1;
- (void)addInstantMessageAddressEnrichment:(id)arg1;
- (void)addOrReplacePreferredEnrichment:(id)arg1;
- (void)addSocialProfileEnrichment:(id)arg1;
- (void)addTaggedCharacterRanges:(id)arg1;
- (void)addUnrecognizedLookupEmailAddress:(id)arg1;
- (void)addUnrecognizedLookupPhoneNumber:(id)arg1;
- (id)addresses;
- (id)authorEmail;
- (id)authorMatchingContacts;
- (id)authorMatchingContactsKeys;
- (void)chopOffContentAfterIndex:(unsigned long long)arg1;
- (void)chopOffContentBeforeIndex:(unsigned long long)arg1;
- (id)contactDetailsWithType:(unsigned long long)arg1;
- (bool)contactInformationExtracted;
- (id)contentHash;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)dataDetectorsSignature;
- (void)dealloc;
- (id)emailAddresses;
- (id)emailToCanonicalEmailCache;
- (id)enrichments;
- (void)enumeratePeople:(id /* block */)arg1;
- (void)enumeratePlainTextLines:(id /* block */)arg1;
- (unsigned long long)eventEnrichmentsCount;
- (id)externalEnrichments;
- (bool)hasEventEnrichment;
- (bool)hasFullDownloadBeenRequested;
- (unsigned long long*)htmlOffsets;
- (struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; }*)inhumanFeatures;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned long long)arg2 extractionInfo:(id)arg3 curated:(bool)arg4 parent:(id)arg5 value:(id)arg6 context:(id)arg7 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)initWithEmailMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4;
- (id)initWithInteraction:(id)arg1 fromBundleIdentifier:(id)arg2;
- (id)initWithInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2;
- (id)initWithMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithTextMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithUnrecognizedContactWithKey:(id)arg1;
- (id)instantMessageAddresses;
- (id)interaction;
- (id)invalidatedMessageIdentifiers;
- (bool)isEvent;
- (bool)isPerson;
- (id)message;
- (bool)pendingGeocode;
- (id)phoneNumbers;
- (id)plainTextContent;
- (id)plainTextDetectedData;
- (id)plainTextLines;
- (id)plainTextQuotedRegions;
- (id)plainTextSigHtmlBlockRegions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })plainTextSigRange;
- (id)plainTextTabularRegions;
- (void)releaseDissectorLock;
- (void)requestFullDownload;
- (void)runWithDissectorLock:(id /* block */)arg1;
- (void)setAuthor:(id)arg1;
- (void)setAuthorMatchingContacts:(id)arg1;
- (void)setAuthorMatchingContactsKeys:(id)arg1;
- (void)setContactInformationExtracted:(bool)arg1;
- (void)setContentHash:(id)arg1;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setDataDetectorsSignature:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (void)setEnrichments:(id)arg1;
- (void)setExternalEnrichments:(id)arg1;
- (void)setInvalidatedMessageIdentifiers:(id)arg1;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setPendingGeocode:(bool)arg1;
- (void)setPlainTextDetectedData:(id)arg1;
- (void)setPlainTextLines:(id)arg1;
- (void)setPlainTextLines:(id)arg1 utf8Offsets:(id)arg2 isAscii:(bool)arg3;
- (void)setPlainTextQuotedRegions:(id)arg1;
- (void)setPlainTextSigHtmlBlockRegions:(id)arg1;
- (void)setPlainTextSigRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPlainTextTabularRegions:(id)arg1;
- (void)setTaggedCharacterRanges:(id)arg1;
- (void)stripContactInformation;
- (void)stripEventInformation;
- (id)taggedCharacterRanges;
- (id)toCloudKitRecordWithId:(id)arg1 parentEntityType:(long long)arg2;

@end
