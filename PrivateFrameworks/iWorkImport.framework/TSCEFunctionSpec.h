/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFunctionSpec : NSObject {
    NSArray * mArguments;
    int  mFunctionIndex;
    NSString * mFunctionName;
    bool  mIsOperator;
    short  mMaxArguments;
    short  mMinArguments;
    NSArray * mRepeatingArguments;
    short  mRepeatingGroupSize;
    int  mShipVersion;
}

@property (nonatomic, readonly) NSArray *arguments;
@property (readonly) int functionIndex;
@property (nonatomic, readonly) NSString *functionName;
@property (nonatomic, readonly) bool isOperator;
@property (nonatomic, readonly) short maxArguments;
@property (nonatomic, readonly) short minArguments;
@property (nonatomic, readonly) unsigned long long numArguments;
@property (nonatomic, readonly) short repeatingGroupSize;
@property (nonatomic, readonly) int versionShippedIn;

+ (id)functionSpecForFunctionIndex:(int)arg1;
+ (id)functionSpecForFunctionName:(id)arg1;
+ (bool)hasAnyDateArgumentsToFunction:(int)arg1;
+ (bool)isModeEnabled:(short)arg1 functionIndex:(short)arg2;
+ (id)specDictionary;
+ (id)specWithFunctionName:(id)arg1 minArgs:(id)arg2 maxArgs:(id)arg3 repeatingGroupSize:(id)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
+ (id)unsupportedFunctionNameForLocale:(id)arg1;

- (id)argumentSpecForIndex:(unsigned long long)arg1;
- (id)arguments;
- (void)dealloc;
- (id)description;
- (id)displayStringForLocale:(id)arg1;
- (int)functionIndex;
- (id)functionName;
- (id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(int)arg4 isOperator:(bool)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
- (bool)isOperator;
- (id)localizedFunctionNameForLocale:(id)arg1;
- (id)localizedToolTipStringForLocale:(id)arg1;
- (short)maxArguments;
- (short)minArguments;
- (id)nativeSyntaxStringForArgument:(int)arg1;
- (unsigned long long)numArguments;
- (void)p_ValidateArguments;
- (short)repeatingGroupSize;
- (int)versionShippedIn;

@end
