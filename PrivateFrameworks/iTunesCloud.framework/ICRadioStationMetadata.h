/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioStationMetadata : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) bool allowsItemLiking;
@property (nonatomic, readonly) bool allowsSharing;
@property (nonatomic, readonly, copy) ICStoreArtworkInfo *artworkInfo;
@property (nonatomic, readonly, copy) NSString *coreSeedName;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationStringID;

- (void).cxx_destruct;
- (bool)allowsItemLiking;
- (bool)allowsSharing;
- (id)artworkInfo;
- (id)coreSeedName;
- (id)descriptionText;
- (id)initWithResponseDictionary:(id)arg1;
- (id)name;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;

@end
