/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDTrendline : NSObject {
    double  mBackward;
    bool  mDisplayEquation;
    bool  mDisplayRSquaredValue;
    double  mForward;
    OADGraphicProperties * mGraphicProperties;
    double  mInterceptYAxis;
    CHDTrendlineLabel * mLabel;
    long long  mMovingAveragePeriod;
    EDString * mName;
    int  mPolynomialOrder;
    int  mType;
}

+ (id)trendline;

- (double)backward;
- (void)dealloc;
- (id)defaultNameWithSeriesName:(id)arg1;
- (id)description;
- (double)forward;
- (id)graphicProperties;
- (id)init;
- (double)interceptYAxis;
- (bool)isDisplayEquation;
- (bool)isDisplayRSquaredValue;
- (id)label;
- (long long)movingAveragePeriod;
- (id)name;
- (int)polynomialOrder;
- (void)setBackward:(double)arg1;
- (void)setDisplayEquation:(bool)arg1;
- (void)setDisplayRSquaredValue:(bool)arg1;
- (void)setForward:(double)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setInterceptYAxis:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setMovingAveragePeriod:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPolynomialOrder:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
