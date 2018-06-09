/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableViewSection : RUIElement <RUIHeaderDelegate, RUITableFooterDelegate> {
    bool  _configured;
    RUITableViewHeaderFooterView * _containerizedFooterView;
    RUITableViewHeaderFooterView * _containerizedHeaderView;
    RUIDetailHeaderElement * _detailHeader;
    long long  _disclosureLimit;
    NSNumber * _drawsTopSeparator;
    RUIElement * _footer;
    double  _footerHeight;
    UIView<RemoteUITableFooter> * _footerView;
    RUIElement * _header;
    double  _headerHeight;
    UIView<RUIHeader> * _headerView;
    NSMutableArray * _rows;
    RUITableViewRow * _showAllRow;
    RUISubHeaderElement * _subHeader;
    RUITableView * _tableElement;
}

@property (nonatomic) bool configured;
@property (nonatomic, retain) RUITableViewHeaderFooterView *containerizedFooterView;
@property (nonatomic, retain) RUITableViewHeaderFooterView *containerizedHeaderView;
@property (nonatomic, retain) RUIDetailHeaderElement *detailHeader;
@property (nonatomic) bool drawTopSeparator;
@property (nonatomic, retain) RUIElement *footer;
@property (nonatomic) double footerHeight;
@property (nonatomic, retain) UIView<RemoteUITableFooter> *footerView;
@property (nonatomic, retain) RUIElement *header;
@property (nonatomic) double headerHeight;
@property (nonatomic, retain) UIView<RUIHeader> *headerView;
@property (nonatomic, readonly) NSArray *rows;
@property (nonatomic, retain) RUITableViewRow *showAllRow;
@property (nonatomic, retain) RUISubHeaderElement *subHeader;
@property (nonatomic) RUITableView *tableElement;

- (void).cxx_destruct;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)addRow:(id)arg1;
- (id)colorFromAttributeString:(id)arg1;
- (bool)configured;
- (id)containerizedFooterView;
- (id)containerizedHeaderView;
- (id)detailHeader;
- (bool)drawTopSeparator;
- (id)footer;
- (double)footerHeight;
- (id)footerView;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (bool)hasCustomFooter;
- (bool)hasCustomHeader;
- (bool)hasValueForDrawsTopSeparator;
- (id)header;
- (double)headerHeight;
- (id)headerView;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (id)rows;
- (void)setAttributes:(id)arg1;
- (void)setConfigured:(bool)arg1;
- (void)setContainerizedFooterView:(id)arg1;
- (void)setContainerizedHeaderView:(id)arg1;
- (void)setDetailHeader:(id)arg1;
- (void)setDrawTopSeparator:(bool)arg1;
- (void)setFooter:(id)arg1;
- (void)setFooterHeight:(double)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShowAllRow:(id)arg1;
- (void)setSubHeader:(id)arg1;
- (void)setTableElement:(id)arg1;
- (id)showAllRow;
- (id)staticFunctions;
- (id)staticValues;
- (id)subElementWithID:(id)arg1;
- (id)subElementsWithName:(id)arg1;
- (id)subHeader;
- (id)tableElement;
- (void)tappedShowAllRowWithTable:(id)arg1;

@end
