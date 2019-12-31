/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARBoardController : NSObject <ARStarBoardSceneManagerObserver> {
    CAMetalLayer * _activeLayer;
    unsigned long long  _currentBoardScene;
    SRHMEConfig * _currentConfig;
    <ARBoardControllerDelegate> * _delegate;
    CAMetalLayer * _springBoardLayer;
    UIView * _springBoardView;
    UIWindowScene * _starBoardScene;
    ARStarBoardViewController * _starBoardViewController;
    UIWindow * _starBoardWindow;
    NSString * _statistics;
}

@property (retain) CAMetalLayer *activeLayer;
@property (nonatomic) unsigned long long currentBoardScene;
@property (nonatomic, retain) SRHMEConfig *currentConfig;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARBoardControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMetalLayer *springBoardLayer;
@property (nonatomic, retain) NSString *statistics;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_evaluateCompositorDestination:(id)arg1;
- (void)_handleStarBoardSceneConnect:(id)arg1;
- (void)_switchToSpringBoard;
- (void)_switchToStarBoard;
- (void)_updateMetalLayer:(id)arg1 descriptor:(id)arg2;
- (id)activeLayer;
- (unsigned long long)currentBoardScene;
- (id)currentConfig;
- (id)delegate;
- (id)initWithView:(id)arg1;
- (bool)isDrawableAvailable;
- (id)nextDrawable;
- (void)setActiveLayer:(id)arg1;
- (void)setCurrentBoardScene:(unsigned long long)arg1;
- (void)setCurrentConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpringBoardLayer:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setView:(id)arg1;
- (id)springBoardLayer;
- (void)starBoardSceneConnected:(id)arg1;
- (void)starBoardSceneDisconnected:(id)arg1;
- (id)statistics;
- (void)updateLayerBounds;
- (void)updateMetalLayer:(id)arg1;
- (id)view;

@end
