/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPPaths : NSObject

+ (id)filename:(id)arg1 subdirectory:(id)arg2;
+ (id)filename:(id)arg1 subdirectory:(id)arg2 createIfNeeded:(bool)arg3;
+ (id)subdirectory:(id)arg1;
+ (id)subdirectory:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(bool)arg1;

@end