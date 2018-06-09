/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyCombinedTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    bool  _darkMode;
    unsigned long long  _displayDeviceType;
    NSString * _displayLanguage;
    NSArray * _privacyFlows;
    bool  _suppressPerPageAnalyticsLogging;
    UITableView * _tableView;
}

@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long displayDeviceType;
@property (retain) NSString *displayLanguage;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *privacyFlows;
@property (readonly) Class superclass;
@property bool suppressPerPageAnalyticsLogging;
@property (retain) UITableView *tableView;

- (void).cxx_destruct;
- (unsigned long long)displayDeviceType;
- (id)displayLanguage;
- (id)init;
- (bool)isDarkMode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)privacyFlows;
- (void)setDarkMode:(bool)arg1;
- (void)setDisplayDeviceType:(unsigned long long)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setPrivacyFlows:(id)arg1;
- (void)setSuppressPerPageAnalyticsLogging:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)suppressPerPageAnalyticsLogging;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
