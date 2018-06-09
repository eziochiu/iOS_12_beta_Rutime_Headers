/* made by EzioChiu.
 */

@protocol MKTransitDepaturesViewControllerDelegate <NSObject>

@required

- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 fromCell:(MKTableViewCell *)arg3;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 showIncidents:(NSArray *)arg2;
- (GEOMapServiceTraits *)transitDeparturesViewControllerTraits:(MKTransitDeparturesViewController *)arg1;

@end
