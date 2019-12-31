/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNImager : TSDImager <TSDConnectedInfoReplacing> {
    double  _drawableThumbnailContentInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableThumbnailSize;
    KNBodyPlaceholderInfo * _replacementBodyPlaceholder;
    KNTitlePlaceholderInfo * _replacementTitlePlaceholder;
    bool  _shouldShowInstructionalText;
    bool  _shouldTintWhiteImages;
    KNAbstractSlide * _slide;
    unsigned long long  _slideNumber;
}

@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double drawableThumbnailContentInset;
@property (nonatomic, readonly) TSUImage *drawableThumbnailImage;
@property (nonatomic) struct CGSize { double x1; double x2; } drawableThumbnailSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) KNBodyPlaceholderInfo *replacementBodyPlaceholder;
@property (nonatomic, retain) KNTitlePlaceholderInfo *replacementTitlePlaceholder;
@property (nonatomic) bool shouldShowInstructionalText;
@property (nonatomic) bool shouldTintWhiteImages;
@property (nonatomic) KNAbstractSlide *slide;
@property (nonatomic) unsigned long long slideNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)drawableThumbnailContentInset;
- (id)drawableThumbnailImage;
- (struct CGSize { double x1; double x2; })drawableThumbnailSize;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isInfoAKeynoteMasterObject:(id)arg1;
- (void)p_prepareShapeInfoStroke:(id)arg1 atScaleFactor:(double)arg2 finalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)p_prepareStyledInfoStyle:(id)arg1;
- (bool)p_requiresModifiedStrokeForDrawable:(id)arg1 atScaleFactor:(double)arg2;
- (double)p_sizeMultiplierForDrawable:(id)arg1;
- (id)p_strokeForShapeInfo:(id)arg1;
- (double)p_strokeWidthForScaleFactor:(double)arg1 drawable:(id)arg2;
- (id)replacementBodyPlaceholder;
- (id)replacementTitlePlaceholder;
- (void)setDrawableThumbnailContentInset:(double)arg1;
- (void)setDrawableThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReplacementBodyPlaceholder:(id)arg1;
- (void)setReplacementTitlePlaceholder:(id)arg1;
- (void)setShouldShowInstructionalText:(bool)arg1;
- (void)setShouldTintWhiteImages:(bool)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideNumber:(unsigned long long)arg1;
- (bool)shouldShowInstructionalText;
- (bool)shouldTintWhiteImages;
- (id)slide;
- (unsigned long long)slideNumber;

@end
