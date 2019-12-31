/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimeballSubscriberStore : NSObject {
    NSMutableArray * _subscriptions;
    NSLock * _subscriptionsLock;
}

@property (nonatomic, readonly) NSArray *subscriptions;

- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)arg1;
- (id)subscriptions;
- (void)unsubscribe:(id)arg1;
- (void)unsubscribeFromDestination:(id)arg1;

@end
