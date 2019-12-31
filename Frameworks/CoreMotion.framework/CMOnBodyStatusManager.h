/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatusManager : NSObject {
    struct CLConnectionClient { id x1; struct CLCallbackDropManager { int (**x_2_1_1)(); struct shared_ptr<int> { int *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_2_1_2; } x2; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct CLConnectionClientNotificationContext {} *x4; } * fLocationdConnection;
    id /* block */  fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> * fOnBodyStatusQueue;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fSubscribedToOnBodyStatusDetection;
}

+ (bool)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)setPropertiesWithDictionary:(id)arg1;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)stopOnBodyStatusDetection;
- (void)stopOnBodyStatusDetectionPrivate;

@end
