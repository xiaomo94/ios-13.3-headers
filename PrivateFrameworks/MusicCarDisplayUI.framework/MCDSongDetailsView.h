/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDSongDetailsView : UIView {
    MCDLabelButton * _albumArtistLabelButton;
    NSString * _albumTitle;
    UILabel * _artistLabel;
    NSString * _artistName;
    unsigned long long  _fontStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _infoRect;
    bool  _isCompactHeight;
    UIStackView * _stackView;
    MCDTitleView * _titleView;
    NSString * _trackTitle;
}

@property (nonatomic, readonly) MCDLabelButton *albumArtistLabelButton;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, retain) UILabel *artistLabel;
@property (nonatomic, retain) NSString *artistName;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } infoRect;
@property (nonatomic) bool isCompactHeight;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, readonly) MCDTitleView *titleView;
@property (nonatomic, retain) NSString *trackTitle;

- (void).cxx_destruct;
- (double)_preferredHeight;
- (void)_updateFont;
- (void)_updateNumberOfLines;
- (id)albumArtistLabelButton;
- (id)albumTitle;
- (id)artistLabel;
- (id)artistName;
- (unsigned long long)fontStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })infoRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompactHeight;
- (void)layoutSubviews;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtistLabel:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setFontStyle:(unsigned long long)arg1;
- (void)setInfoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsCompactHeight:(bool)arg1;
- (void)setStackView:(id)arg1;
- (void)setTrackTitle:(id)arg1;
- (id)stackView;
- (id)titleView;
- (id)trackTitle;

@end
