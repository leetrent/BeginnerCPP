// unsigned int count_word_occurrence(string file_name, string search_word)
// {
//     ifstream search_file {file_name};
//     if (!search_file.is_open())
//     {
//         throw FileHandlingException("Could not open file '" + file_name + "'.");
//     }
//     string word_read_in {};
//     unsigned int word_count {0};
//     unsigned int match_count {0};
//
//     while (search_file >> word_read_in)
//     {
//         word_count++;
//         if (search_word_found(search_word, word_read_in) )
//         {
//
//         }
//     }
// }
//
// bool search_word_found(string search_word, string word_just_read)
// {
//     size_t word_found = word_just_read.find(search_word);
//     if (word_found == string::npos)
//     {
//         return false;
//     }
//     return true;
// }
