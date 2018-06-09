/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimParameterGroup : NSObject {
    NSString * _fileName;
    NSString * _name;
    KNAnimParameterSavedGroup * _savedGroup;
}

@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) KNAnimParameterSavedGroup *savedGroup;

+ (id)easeInEaseOutPath;
+ (id)easeInPath;
+ (id)easeOutPath;
+ (id)linearPath;
+ (id)mediaTimingFunctionForPath:(id)arg1 reversed:(bool)arg2;
+ (void)p_loadAllParametersIfNecessary;
+ (id)parameterGroupForName:(id)arg1;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (double)doubleForAnimationCurve:(id)arg1 atPercent:(double)arg2;
- (double)doubleForKey:(id)arg1;
- (id)fileName;
- (id)initWithFileName:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(bool)arg2;
- (id)name;
- (void)p_loadParameters;
- (id)pathForAnimationCurve:(id)arg1;
- (id)savedGroup;
- (void)setFileName:(id)arg1;
- (void)setSavedGroup:(id)arg1;

@end
