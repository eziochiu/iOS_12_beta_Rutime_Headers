/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFCollectionView : UICollectionView {
    id  _dataSourceAdaptor;
    id  _delegateAdaptor;
    UIColor * _pdfBackgroundColor;
    <PDFCollectionViewDataSource> * _pdfDataSource;
    <PDFCollectionViewDelegate> * _pdfDelegate;
}

@property (nonatomic, copy) UIColor *pdfBackgroundColor;
@property (nonatomic) <PDFCollectionViewDataSource> *pdfDataSource;
@property (nonatomic) <PDFCollectionViewDelegate> *pdfDelegate;

+ (Class)classForPlatform;
+ (id)instanceForPlatform;

- (void).cxx_destruct;
- (id)pdfBackgroundColor;
- (id)pdfDataSource;
- (id)pdfDelegate;
- (void)reloadDataAndRecenter;
- (void)setPdfBackgroundColor:(id)arg1;
- (void)setPdfDataSource:(id)arg1;
- (void)setPdfDelegate:(id)arg1;
- (void)setup;

@end
