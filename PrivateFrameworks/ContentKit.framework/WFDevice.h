/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFDevice : NSObject {
    NSArray * _capabilities;
}

@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) long long chipID;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *localizedWiFiDisplayName;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;

+ (id)currentDevice;

- (void).cxx_destruct;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (id)capabilities;
- (long long)chipID;
- (bool)hasCapability:(id)arg1;
- (long long)idiom;
- (id)localizedModel;
- (id)localizedWiFiDisplayName;
- (id)marketingName;
- (id)model;
- (id)name;
- (long long)platform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (double)screenScale;
- (id)systemName;
- (id)systemVersion;

@end