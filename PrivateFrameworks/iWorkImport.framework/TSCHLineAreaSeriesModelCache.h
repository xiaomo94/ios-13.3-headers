/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLineAreaSeriesModelCache : NSObject {
    double  mDataPointSize;
    TSCHChartAxis * mGroupAxis;
    unsigned int  mLabelPosition;
    int  mLineType;
    double  mOpacity;
    TSWPParagraphStyle * mParagraphStyle;
    TSCHChartSeries * mSeries;
    id  mSeriesFill;
    unsigned long long  mSeriesIndex;
    TSDShadow * mSeriesShadow;
    TSDStroke * mSeriesStroke;
    bool  mShowLabelsInFront;
    bool  mShowValueLabels;
    id  mSymbolFill;
    TSDStroke * mSymbolStroke;
    int  mSymbolType;
    struct CGPath { } * mUnitSymbolPath;
    TSCHChartValueAxis * mValueAxis;
}

@property (readonly) double dataPointSize;
@property (readonly) TSCHChartAxis *groupAxis;
@property (readonly) unsigned int labelPosition;
@property (readonly) int lineType;
@property (readonly) double opacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) TSCHChartSeries *series;
@property (readonly) id seriesFill;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) TSDShadow *seriesShadow;
@property (readonly) TSDStroke *seriesStroke;
@property (readonly) bool showLabelsInFront;
@property (readonly) bool showValueLabels;
@property (readonly) id symbolFill;
@property (readonly) TSDStroke *symbolStroke;
@property (readonly) int symbolType;
@property (readonly) struct CGPath { }*unitSymbolPath;
@property (readonly) TSCHChartValueAxis *valueAxis;

- (void).cxx_destruct;
- (double)dataPointSize;
- (void)dealloc;
- (id)groupAxis;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2;
- (unsigned int)labelPosition;
- (int)lineType;
- (double)opacity;
- (id)paragraphStyle;
- (id)series;
- (id)seriesFill;
- (unsigned long long)seriesIndex;
- (id)seriesShadow;
- (id)seriesStroke;
- (bool)showLabelsInFront;
- (bool)showValueLabels;
- (id)symbolFill;
- (id)symbolStroke;
- (int)symbolType;
- (struct CGPath { }*)unitSymbolPath;
- (id)valueAxis;

@end