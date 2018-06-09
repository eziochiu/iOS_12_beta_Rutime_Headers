/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTableViewScrollTester : NSObject {
    id /* block */  _completion;
    bool  _directionUp;
    double  _scrollTime;
    double  _startTime;
    UITableView * _tableView;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool directionUp;
@property (nonatomic) double scrollTime;
@property (nonatomic) double startTime;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)directionUp;
- (void)fire:(id)arg1;
- (id)init;
- (void)performScrollTestOnTableView:(id)arg1 completion:(id /* block */)arg2;
- (double)scrollTime;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDirectionUp:(bool)arg1;
- (void)setScrollTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTableView:(id)arg1;
- (double)startTime;
- (id)tableView;

@end
