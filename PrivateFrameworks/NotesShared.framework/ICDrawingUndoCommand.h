/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingUndoCommand : NSObject {
    NSString * _actionName;
    ICDrawingUndoCheckPoint * _checkPoint;
    NSArray * _commands;
    bool  _hide;
}

@property (nonatomic, retain) NSString *actionName;
@property (nonatomic, retain) ICDrawingUndoCheckPoint *checkPoint;
@property (nonatomic, retain) NSArray *commands;
@property (nonatomic) bool hide;
@property (nonatomic, readonly) NSArray *visibleCommands;

- (void).cxx_destruct;
- (id)actionName;
- (id)checkPoint;
- (id)commands;
- (bool)hide;
- (double)renderCost;
- (void)setActionName:(id)arg1;
- (void)setCheckPoint:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setHide:(bool)arg1;
- (id)undoCommandHidden:(bool)arg1;
- (id)visibleCommands;

@end
