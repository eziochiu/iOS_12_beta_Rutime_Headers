/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVDataMigrator : NSObject {
    NSString * _searchHint;
    NSString * _serviceIdentifier;
}

@property (nonatomic, copy) NSString *searchHint;
@property (nonatomic, copy) NSString *serviceIdentifier;

+ (id)carrierServiceName;
+ (id)homeDirectory;

- (void).cxx_destruct;
- (void)createFoldersIfNecessary;
- (void)performIMAPFilePathMigration;
- (void)performMigrationIfNecessary;
- (id)searchHint;
- (id)serviceIdentifier;
- (void)setSearchHint:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (bool)shouldPerformMigration;

@end
