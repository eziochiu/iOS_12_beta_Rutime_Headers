/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppCellularManagementCache : NSObject {
    NSArray * _managedCellDataAppCache;
}

@property (nonatomic, readonly) bool hasManagedCellularData;
@property (retain) NSArray *managedCellDataAppCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasManagedCellularData;
- (id)init;
- (id)initPrivate;
- (bool)isManaged:(id)arg1;
- (id)managedAppBundleIDs;
- (id)managedCellDataAppBundleIDs;
- (id)managedCellDataAppCache;
- (void)setManagedCellDataAppCache:(id)arg1;
- (void)willEnterForeground;

@end
