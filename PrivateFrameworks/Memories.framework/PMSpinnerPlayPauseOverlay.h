/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMSpinnerPlayPauseOverlay : UIView {
    unsigned long long  _displayState;
    UIView * _playPauseButton;
    UIView * _spinnerView;
}

@property (nonatomic) unsigned long long displayState;
@property (nonatomic, retain) UIView *playPauseButton;
@property (nonatomic, retain) UIView *spinnerView;

- (void).cxx_destruct;
- (unsigned long long)displayState;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)playPauseButton;
- (void)setDisplayState:(unsigned long long)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setShowAsPause:(bool)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setup;
- (id)spinnerView;

@end
