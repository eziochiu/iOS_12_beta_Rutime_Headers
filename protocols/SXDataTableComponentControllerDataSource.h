/* made by EzioChiu.
 */

@protocol SXDataTableComponentControllerDataSource <NSObject>

@required

- (SXDataTableComponent *)componentForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (NSString *)contentSizeCategoryForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (SXColumnLayout *)documentColumnLayoutForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (SXDocumentController *)documentControllerForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (<SXTextComponentLayoutHosting> *)textComponentLayoutHostingForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (double)widthForDataTableComponentController:(SXDataTableComponentController *)arg1;

@end
