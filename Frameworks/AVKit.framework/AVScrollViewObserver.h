/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrollViewObserver : NSObject <_UIScrollViewScrollObserver> {
    NSHashTable * _observedScrollViews;
    UIView<AVScrollViewObserverContentView> * _observer;
    bool  _scrolling;
    NSTimer * _scrollingDidEndTimer;
    bool  _scrollingQuickly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSHashTable *observedScrollViews;
@property (nonatomic) UIView<AVScrollViewObserverContentView> *observer;
@property (getter=isScrolling, nonatomic) bool scrolling;
@property (nonatomic, retain) NSTimer *scrollingDidEndTimer;
@property (getter=isScrollingQuickly, nonatomic) bool scrollingQuickly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_updateScrollingStatus;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;
- (bool)isScrolling;
- (bool)isScrollingQuickly;
- (id)observedScrollViews;
- (id)observer;
- (id)scrollingDidEndTimer;
- (void)setObservedScrollViews:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setScrollingDidEndTimer:(id)arg1;
- (void)setScrollingQuickly:(bool)arg1;
- (void)updateObservedScrollViews;

@end
