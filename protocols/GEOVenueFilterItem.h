/* made by EzioChiu.
 */

@protocol GEOVenueFilterItem

@required

- (bool)describesParentVenue;
- (<GEOVenueIdentifier> *)filterID;
- (<GEOVenueLabel> *)label;

@end
