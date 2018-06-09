/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface WorldClockPreferences : NSObject

- (id)cities;
- (bool)defaultCitiesAdded;
- (id)defaultsKeys;
- (id)lastModified;
- (void)setCities:(id)arg1;
- (void)setDefaultCitiesAdded:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (bool)synchronize;

@end
