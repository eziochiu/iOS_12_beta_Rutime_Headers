/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMetadataClientController : NSObject {
    TUMetadataCache * _metadataCache;
}

@property (nonatomic, retain) TUMetadataCache *metadataCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_metadataDestinationIdForSearchItem:(id)arg1;
- (id)directoryLabelForDestinationID:(id)arg1;
- (id)directoryLabelForSearchItem:(id)arg1;
- (id)init;
- (id)locationForDestinationID:(id)arg1;
- (id)locationForSearchItem:(id)arg1;
- (id)metadataCache;
- (void)setMetadataCache:(id)arg1;
- (id)suggestionForDestinationID:(id)arg1;
- (id)suggestionForSearchItem:(id)arg1;
- (void)updateMetadataForDestinationID:(id)arg1;
- (void)updateMetadataForRecentCalls:(id)arg1;

@end
