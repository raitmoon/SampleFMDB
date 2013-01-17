//
//  DetailViewController.h
//  SampleFMDB
//
//  Created by tomo on 6/2/12.
//  Copyright (c) 2012 ideaxdiscovery. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Artist.h"

@interface DetailViewController : UIViewController
{
    Artist *artist;
    UILabel *name;
    UILabel *genre;
    UILabel *origin;
    UILabel *yearsActive;
}
@property (nonatomic,retain) Artist *artist;
@property (nonatomic,retain) IBOutlet UILabel *name;
@property (nonatomic,retain) IBOutlet UILabel *genre;
@property (nonatomic,retain) IBOutlet UILabel *origin;
@property (nonatomic,retain) IBOutlet UILabel *yearsActive;
@end
