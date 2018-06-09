/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEConfiguration : NSObject {
    unsigned int  mWarnWhenFormulasReferToEmptyCells;
}

+ (id)sharedCalculationEngineConfiguration;

- (id)init;
- (void)setWarnWhenFormulasReferToEmptyCells:(bool)arg1;
- (bool)warnWhenFormulasReferToEmptyCells;

@end
