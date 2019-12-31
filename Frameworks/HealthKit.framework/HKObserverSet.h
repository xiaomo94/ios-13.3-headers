/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObserverSet : NSObject {
    NSObject<OS_os_log> * _category;
    NSObject<OS_dispatch_queue> * _defaultObserverQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMapTable * _observerMap;
}

@property (readonly, copy) NSArray *allObservers;
@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_notifyObserver:(id)arg1 handler:(id /* block */)arg2;
- (void)_registerObserver:(id)arg1 queue:(id)arg2;
- (id)allObservers;
- (unsigned long long)count;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;
- (void)notifyObserver:(id)arg1 handler:(id /* block */)arg2;
- (void)notifyObservers:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
