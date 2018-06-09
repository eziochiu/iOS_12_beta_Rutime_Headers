/* made by EzioChiu.
 */

@protocol TSTTableStrokeProviding <NSObject>

@required

- (TSDStroke *)bodyColumnStroke;
- (TSDStroke *)bodyRowStroke;
- (TSDStroke *)bodyRowStrokeEvenIfNotVisible;
- (TSDStroke *)defaultHorizontalBorderStroke;
- (TSDStroke *)defaultHorizontalBorderStrokeEvenIfNotVisible;
- (TSDStroke *)defaultVerticalBorderStroke;
- (TSDStroke *)footerRowBodyColumnStroke;
- (TSDStroke *)footerRowBodyRowStroke;
- (TSDStroke *)footerRowBorderStroke;
- (TSDStroke *)footerRowSeparatorStroke;
- (TSDStroke *)headerColumnBodyColumnStroke;
- (TSDStroke *)headerColumnBodyRowStroke;
- (TSDStroke *)headerColumnBorderStroke;
- (TSDStroke *)headerColumnSeparatorStroke;
- (TSDStroke *)headerRowBodyColumnStroke;
- (TSDStroke *)headerRowBodyRowStroke;
- (TSDStroke *)headerRowBorderStroke;
- (TSDStroke *)headerRowSeparatorStroke;

@end
