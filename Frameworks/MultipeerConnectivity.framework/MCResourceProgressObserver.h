/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCResourceProgressObserver : NSObject {
    id /* block */  _cancelHandler;
    NSString * _name;
    NSProgress * _progress;
    bool  _progressObserversSet;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSProgress *progress;

- (id /* block */)cancelHandler;
- (void)dealloc;
- (id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(id /* block */)arg3;
- (void)invalidate;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setProgress:(id)arg1;

@end
