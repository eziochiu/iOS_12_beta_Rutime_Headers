/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKDataHeaderModel : NSObject {
    _MKLineHeaderModel * _firstLine;
    _MKLineHeaderModel * _forthLine;
    _MKLineHeaderModel * _secondLine;
    _MKLineHeaderModel * _thirdLine;
    MKTransitInfoLabelView * _transitLabel;
}

@property (nonatomic, retain) _MKLineHeaderModel *firstLine;
@property (nonatomic, retain) _MKLineHeaderModel *forthLine;
@property (nonatomic, retain) _MKLineHeaderModel *secondLine;
@property (nonatomic, retain) _MKLineHeaderModel *thirdLine;
@property (nonatomic, retain) MKTransitInfoLabelView *transitLabel;

- (void).cxx_destruct;
- (id)description;
- (id)firstLine;
- (id)forthLine;
- (id)init;
- (id)secondLine;
- (void)setFirstLine:(id)arg1;
- (void)setForthLine:(id)arg1;
- (void)setSecondLine:(id)arg1;
- (void)setThirdLine:(id)arg1;
- (void)setTransitLabel:(id)arg1;
- (id)thirdLine;
- (id)transitLabel;

@end
