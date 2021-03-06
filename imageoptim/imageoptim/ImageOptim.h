/* ImageOptim */

#import <Cocoa/Cocoa.h>
@class FilesQueue;
@class PrefsController;

@interface ImageOptim : NSObject
{
	NSTableView *tableView;
	//IBOutlet NSMutableArray *files;
	NSArrayController *filesController;
	
	FilesQueue *filesQueue;
	NSApplication *application;
	PrefsController *prefsController;
	
	NSProgressIndicator *progressBar;
    NSTextField *statusBarLabel;
    NSTextView *credits;
}

- (IBAction)showPrefs:(id)sender;
- (IBAction)startAgain:(id)sender;


-(IBAction)openPngOutHomepage:(id)sender;
-(IBAction)openPngOutDownload:(id)sender;

-(IBAction)browseForFiles:(id)sender;

+ (void)initialize;

+(int)numberOfCPUs;

@property (retain,nonatomic) IBOutlet NSTextField *statusBarLabel;
@property (retain) IBOutlet NSTableView *tableView;
@property (retain) IBOutlet NSArrayController *filesController;
@property (retain) IBOutlet NSApplication *application;
@property (retain) IBOutlet NSProgressIndicator *progressBar;
@property (retain,nonatomic) IBOutlet NSTextView *credits;
@end
