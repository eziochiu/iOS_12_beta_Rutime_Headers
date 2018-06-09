/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation {
    TILanguageModelAdaptationContext * _adaptationContext;
    TIMecabraWrapper * _mecabraWrapper;
    NSString * _paragraph;
    double  _timeStamp;
}

@property (nonatomic, copy) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;
@property (nonatomic, copy) NSString *paragraph;
@property (nonatomic) double timeStamp;

- (void).cxx_destruct;
- (id)adaptationContext;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4;
- (id)mecabraWrapper;
- (id)paragraph;
- (void)perform;
- (void)setAdaptationContext:(id)arg1;
- (void)setMecabraWrapper:(id)arg1;
- (void)setParagraph:(id)arg1;
- (void)setTimeStamp:(double)arg1;
- (double)timeStamp;

@end
