/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileOptions : NSObject <NSCopying>

@property (nonatomic) NSString *additionalCompilerArguments;
@property (nonatomic) bool compileTimeStatisticsEnabled;
@property (nonatomic) bool debuggingEnabled;
@property (nonatomic) bool fastMathEnabled;
@property (nonatomic) bool glBufferBindPoints;
@property (nonatomic) unsigned long long languageVersion;
@property (nonatomic, copy) NSDictionary *preprocessorMacros;
@property (nonatomic) bool tracingEnabled;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
