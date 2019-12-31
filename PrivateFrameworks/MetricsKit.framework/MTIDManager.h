/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTIDManager : NSObject {
    MTIDFileStorage * _appStorage;
    MTIDFileStorage * _deviceStorage;
    MTIDMemoryStorage * _sessionStorage;
}

@property (nonatomic, retain) MTIDFileStorage *appStorage;
@property (nonatomic, retain) MTIDFileStorage *deviceStorage;
@property (nonatomic, retain) MTIDMemoryStorage *sessionStorage;

+ (id)shared;

- (void).cxx_destruct;
- (id)IDForNamespace:(id)arg1;
- (id)IDInfoForNamespace:(id)arg1;
- (id)IDInfoForNamespace:(id)arg1 cachePolicy:(long long)arg2;
- (id)appStorage;
- (id)createNamespace:(id)arg1;
- (id)createNamespace:(id)arg1 options:(id)arg2;
- (id)deleteNamespace:(id)arg1;
- (id)deviceStorage;
- (id)resetIDForNamespace:(id)arg1;
- (id)sessionStorage;
- (void)setAppStorage:(id)arg1;
- (void)setDeviceStorage:(id)arg1;
- (void)setSessionStorage:(id)arg1;
- (id)storageForNamespace:(id)arg1;
- (id)valueForNamespace:(id)arg1 options:(id)arg2 cachePolicy:(long long)arg3;

@end
