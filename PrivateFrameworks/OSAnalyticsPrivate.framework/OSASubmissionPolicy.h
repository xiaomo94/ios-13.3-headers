/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

@interface OSASubmissionPolicy : NSObject {
    NSMutableDictionary * _cadenceThrottleCache;
    NSArray * _default_template;
    bool  _hasTasking;
    NSString * _identifier;
    bool  _ignoreProxies;
    bool  _permissive;
    NSMutableDictionary * _policies;
    NSDictionary * _prefaces;
    NSArray * _primary_template;
    NSMutableDictionary * _results;
    NSArray * _specific_files;
    bool  _usingCellular;
}

@property (readonly) bool hasTasking;
@property bool ignoreProxies;
@property (readonly) NSDictionary *latestResults;
@property bool permissive;
@property bool usingCellular;

+ (struct { double x1; double x2; bool x3; })guardingWindow;

- (void).cxx_destruct;
- (id)_loadPreviousResults;
- (id)buildSubmissionTemplateForConfig:(id)arg1;
- (struct { double x1; double x2; bool x3; })calcNextWindow;
- (id)getCadence:(id)arg1;
- (bool)hasTasking;
- (bool)ignoreProxies;
- (id)init;
- (id)initWithTemplate:(id)arg1 options:(id)arg2;
- (double)intervalForCadence:(id)arg1;
- (id)latestResults;
- (bool)pastDue;
- (bool)permissive;
- (void)persist;
- (void)registerRouting:(id)arg1 result:(bool)arg2;
- (double)secondsAgo:(id)arg1;
- (void)setIgnoreProxies:(bool)arg1;
- (void)setPermissive:(bool)arg1;
- (void)setUsingCellular:(bool)arg1;
- (bool)shouldConsiderCadence:(id)arg1;
- (id)shouldSubmitRouting:(id)arg1;
- (bool)usingCellular;

@end
