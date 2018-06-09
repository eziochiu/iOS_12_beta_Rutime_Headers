/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVPath : NSObject

+ (int)parseCommand:(const char **)arg1;
+ (struct EshComputedValue { bool x1; int x2; })parseParam:(const char **)arg1 first:(bool)arg2;
+ (void)readPath:(id)arg1 toGeometry:(id)arg2;
+ (void)writePath:(id)arg1 toString:(id)arg2;

@end
