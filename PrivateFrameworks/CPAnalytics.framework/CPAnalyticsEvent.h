/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsEvent : NSObject {
    NSString * _name;
    NSDictionary * _payload;
    CPAnalyticsSystemProperties * _systemProperties;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) CPAnalyticsSystemProperties *systemProperties;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)copyRawPayload;
- (id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3;
- (id)name;
- (id)payload;
- (struct NSObject { Class x1; }*)propertyForKey:(id)arg1;
- (id)systemProperties;
- (id)timestamp;

@end
