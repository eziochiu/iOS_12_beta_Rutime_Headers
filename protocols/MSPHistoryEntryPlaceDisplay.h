/* made by EzioChiu.
 */

@protocol MSPHistoryEntryPlaceDisplay <MSPHistoryEntry>

@required

- (<GEOMapItem> *)geoMapItem;
- (NSUUID *)supersededSearchStorageIdentifier;

@end
