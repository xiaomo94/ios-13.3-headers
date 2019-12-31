/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSearchEngineInfo : WBSSearchProvider {
    NSString * _scriptName;
    int  _searchID;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) unsigned long long endpointType;
@property (nonatomic, readonly) int resultType;
@property (nonatomic, readonly) NSString *scriptName;
@property (nonatomic, readonly) int searchID;

+ (unsigned long long)_endpointTypeForShortName:(id)arg1;
+ (int)_resultTypeForShortName:(id)arg1;
+ (id)engineFromDictionary:(id)arg1 withController:(id)arg2;
+ (bool)shouldIncludeEngineFromDictionary:(id)arg1 withController:(id)arg2;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)description;
- (id)displayName;
- (unsigned long long)endpointType;
- (id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 hostSuffixes:(id)arg5 pathPrefixes:(id)arg6 usesSearchTermsFromFragment:(bool)arg7 suggestionsTemplate:(id)arg8 topLevelDomains:(id)arg9 safeSearchSuffix:(id)arg10 safeSearchURLQueryParameters:(id)arg11 carrierInfo:(id)arg12 controller:(id)arg13;
- (int)resultType;
- (id)scriptName;
- (int)searchID;
- (bool)searchShouldUseSafeSearchTemplate;

@end
